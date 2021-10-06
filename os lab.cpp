#include <stdio.h>
//find the waiting time for all processes
int waitingtime(int proc[], int n,int burst_time[], int wait_time[]) {
 // the waiting time for first process is 0
 wait_time[0] = 0;
 // calculating waiting time
 for (int i = 1; i < n ; i++ )
 wait_time[i] = burst_time[i-1] + wait_time[i-1] ;
 return 0;
}
// Function to calculate turn around time
int turnaroundtime( int proc[], int n,int burst_time[], int wait_time[], int tat[]) {
 // calculating turnaround time by adding
 // burst_time[i] + wait_time[i]
 int i;
 for ( i = 0; i < n ; i++)
 tat[i] = burst_time[i] + wait_time[i];
 return 0;
}
//Function to calculate average time
int avgtime( int proc[], int n, int burst_time[]) {
 int wait_time[n], tat[n], total_wt = 0, total_tat = 0;
 int i;
 //Function to find waiting time of all processes
 waitingtime(proc, n, burst_time, wait_time);
 turnaroundtime(proc, n, burst_time, wait_time, tat);
 //Display processes along with all details
 printf("Processes Burst Waiting Turn around \n");
 for ( i=0; i<n; i++) {
total_wt = total_wt + wait_time[i];
 total_tat = total_tat + tat[i];
 printf(" %d\t %d\t\t %d \t%d\n", i+1, burst_time[i], wait_time[i], tat[i]);
 }
 printf("Average waiting time = %f\n", (float)total_wt / (float)n);
 printf("Average turn around time = %f\n", (float)total_tat / (float)n);
 return 0;
}
int main() {   // main code
 //process id's
 int n;
 printf("Enter no. of processes: ");
 scanf("%d",&n);
 int process[n];
 for(int i = 0; i < n; i++){
 process[i] = i;
 }
 int burst_time[n];//Burst Time
 for(int i = 0; i < n; i++){
 int inputs;
 printf("Enter burst time for process %d : ",(i));
 scanf("%d",&inputs);
 burst_time[i] = inputs;
 }
 avgtime(process, n, burst_time);
 return 0;
}
