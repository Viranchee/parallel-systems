#include <cstdlib>
#include <experimental/simd>
#include <iostream>
#include <mpi.h>
#include <omp.h>
#include <stdio.h>
#include <vector>

using namespace std;
// https://longing-duckling-38b.notion.site/HW1-MPI-Programming-100-points-fcce02c8d6d74bdd911c68735a7b8e5a

namespace hw1_task1 {
/*
1. Latency between the Nodes
(50 points) Write an MPI program that determines the point-to-point message
latency for pairs of nodes. We will exchange messages with varying message sizes
from 32KB to 2MB (32KB, 64KB, 128KB, ..., 2MB). The same program should iterate
through each of the message sizes with 10 iterations for each. We will use 8
nodes (4 pairs). Remember to promptly release the nodes by exiting the compute
node IMMEDIATELY after your code is finished or by using batch scripts.Note: Use
gettimeofday to time the round-trip rather than MPI_Wtime since MPI_Wtime
doesn't have the precision we need for small message sizes.

You are required to implement message passing using MPI_Send() and MPI_Recv.

a. One pair of nodes talk to each other, that is message passing should happen
in two nodes.

b. Two pairs of node communicate in parallel, that is message passing should
happen in four nodes simultaneously

c. Three pairs of node communicate in parallel, that is message passing should
happen in six nodes simultaneously

d. Four pairs of nodes communicate in parallel, that is message passing should
happen in eight nodes simultaneously
*/

void getRankSize(int &rank, int &size) {
  MPI_Comm_rank(MPI_COMM_WORLD, &rank);
  MPI_Comm_size(MPI_COMM_WORLD, &size);
}

int latencyBetweenNodes() {
  MPI_Status status;
  int rank;
  MPI_Comm_rank(MPI_COMM_SELF, &rank);
  cout << "Rank: " << rank << endl;
  // MPI_Comm_size(MPI_Comm comm, int *size)
  // MPI_Comm_size(MPI_Comm comm, int *size)
  // MPI_Comm_rank(MPI_Comm comm, int *rank)
  //

  return -1;
}
} // namespace hw1_task1

int main(int argc, char *argv[]) {
  MPI_Init(&argc, &argv);
  int rank, size;
  hw1_task1::getRankSize(rank, size);
  printf("Processor %d of %d\n", rank, size);
  int r = if (rank == r) { cout << "I'm random, rank: " << rank << endl; }

  MPI_Request *request;
  MPI_Status *status;
  int bar = MPI_Barrier_init(MPI_COMM_WORLD, MPI_INFO_ENV, request);
  // MPI_Barrier(MPI_COMM_WORLD);
  MPI_Barrier(MPI_COMM_WORLD);
  // MPI_Barrier(MPI_COMM_SELF);
  hw1_task1::latencyBetweenNodes();

  MPI_Finalize();
  return 0;
}
