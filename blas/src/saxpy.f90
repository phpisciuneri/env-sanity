program blas_saxpy
  implicit none

  integer, parameter :: N = 10
  
  integer :: i
  real    :: alpha, x(N), y(N)

  ! initialize
  alpha = 10
  do i=1,N
     x(i) = i
     y(i) = 2*i
  end do

  ! y = alpha * x + y
  CALL SAXPY( N, alpha, x, 1, y, 1 )

  ! check
  do i=1,N
     print *, y(i), " should equal ", alpha*i + 2*i
  end do

end program blas_saxpy
