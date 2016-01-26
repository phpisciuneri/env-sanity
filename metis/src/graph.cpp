#include <iostream>
#include <metis.h>
#include <vector>
#include <stdexcept>

int main()
{

  /* We aim to partition the following mesh into 4 parts:
   *  
   *  0---1---2---3---4
   *  |   |   |   |   |
   *  5---6---7---8---9
   *  |   |   |   |   |
   * 10--11--12--13--14
   *
   */
  const int nVertices = 15;
  const int nNeighs   = 44;
  idx_t xadj [nVertices+1] = { 0, 2, 5, 8, 11, 13, 16, 20, 24, 28, 31, 33, 36, 39, 42, 44 };
  idx_t adjncy [nNeighs] = { 1, 5, 0, 2, 6, 1, 3, 7, 2, 4, 8, 3, 9, 0, 6, 10, 1, 5, 7, 11,
		    2, 6, 8, 12, 3, 7, 9, 13, 4, 8, 14, 5, 11, 6, 10, 12, 7, 11,
		    13, 8, 12, 14, 9, 13 };

  std::cout << "Before Partitioning:" << std::endl;
  std::cout << std::endl;
  std::cout << "0---0---0---0---0" << std::endl;
  std::cout << "|   |   |   |   |" << std::endl;
  std::cout << "0---0---0---0---0" << std::endl;
  std::cout << "|   |   |   |   |" << std::endl;
  std::cout << "0---0---0---0---0" << std::endl;
  std::cout << std::endl;

  // partition the graph using metis
  idx_t nvtxs    = nVertices;         // number of vertices
  idx_t ncon     = 1;                 // number of balancing constraints
  idx_t *vwgt    = NULL;              // vertex weights
  idx_t *vsize   = NULL;              // vertex sizes
  idx_t *adjwgt  = NULL;              // edge weights
  idx_t nparts   = 4;                 // number of partitions
  real_t *tpwgts = NULL;              // target partition weight
  real_t *ubvec  = NULL;              // load balance tolerance for each constraint
  idx_t options[METIS_NOPTIONS];      // array of options
  METIS_SetDefaultOptions( options ); // use defaults
  idx_t objval;                       // edge-cut on return
  std::vector< idx_t > colors( nVertices, 0 ); // ranks
  
  int ierr = METIS_PartGraphRecursive( &nvtxs, &ncon, &xadj[0], &adjncy[0], vwgt, vsize,
				       adjwgt, &nparts, tpwgts, ubvec, options, &objval, &colors[0] );

  if ( ierr != METIS_OK )
    throw std::runtime_error( "METIS graph partitioning failed!" );
    
  std::cout << "After Partitioning:" << std::endl;
  std::cout << std::endl;
  std::cout << colors[0] << "---" << colors[1] << "---" << colors[2] <<
    "---" << colors[3] << "---" << colors[4] << std::endl;
  std::cout << "|   |   |   |   |" << std::endl;
  std::cout << colors[5] << "---" << colors[6] << "---" << colors[7] <<
    "---" << colors[8] << "---" << colors[9] << std::endl;
  std::cout << "|   |   |   |   |" << std::endl;
  std::cout << colors[10] << "---" << colors[11] << "---" << colors[12] <<
    "---" << colors[13] << "---" << colors[14] << std::endl;
  std::cout << std::endl;
  
  return 0;
}
