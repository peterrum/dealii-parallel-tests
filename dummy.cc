#include <deal.II/base/mpi.h>
#include <iostream>
#include <unistd.h>

int main(int argc, char *argv[]) {
  using namespace dealii;
  Utilities::MPI::MPI_InitFinalize mpi_initialization(argc, argv, 1);

  if (Utilities::MPI::this_mpi_process(MPI_COMM_WORLD) == 0) {
    std::cout << Utilities::MPI::n_mpi_processes(MPI_COMM_WORLD) << std::endl;
    std::cout << "Started" << std::endl;
    sleep(10);
    std::cout << "Finished" << std::endl;
  }
}
