#include<stdio.h>
#include<conio.h>
#define INFINITY 9999
#define MAX 14
 
void djikstra(int G[MAX][MAX],int n,int startnode,int end);
 
int main()
{
    int G[MAX][MAX],i,j,n,u,end;
    n=14;
    
    G [0][0] = 0; 
	G [0][1] = 450; 
	G [0][2] = 550; 
	G [0][3] = 0; 
	G [0][4] = 0; 
	G [0][5] = 0; 
	G [0][6] = 0; 
	G [0][7] = 0; 
	G [0][8] = 0; 
   	G [0][9] = 0; 
	G [0][10] = 450; 
	G [0][11] = 0; 
	G [0][12] = 0; 
	G [0][13] = 0;
    																					 
   G [1][0] = 450; 
   G [1][1] = 0; 
   G [1][2] = 0; 
   G [1][3] = 0; 
   G [1][4] = 0; 
   G [1][5] = 0; 
   G [1][6] = 0; 
   G [1][7] = 0; 
   G [1][8] = 0; 
   G [1][9] = 0; 
   G [1][10] = 0; 
   G [1][11] = 0; 
   G [1][12] = 0; 
   G [1][13] = 800; 
    				
   G [2][0] = 550; 																					 
   G [2][1] = 0; 
   G [2][2] = 0; 
   G [2][3] = 150; 
   G [2][4] = 100; 
   G [2][5] = 0; 
   G [2][6] = 250; 
   G [2][7] = 0; 
   G [2][8] = 0; 
   G [2][9] = 0; 
   G [2][10] = 300; 
   G [2][11] = 0; 
   G [2][12] = 0; 
   G [2][13] = 0; 
 
   G [3][0] = 0; 
   G [3][1] = 0; 
   G [3][2] = 150; 
   G [3][3] = 0; 
   G [3][4] = 0; 
   G [3][5] = 0; 
   G [3][6] = 0; 
   G [3][7] = 0; 
   G [3][8] = 0; 
   G [3][9] = 0; 
   G [3][10] = 0; 
   G [3][11] = 0; 
   G [3][12] = 0; 
   G [3][13] = 0; 
 
   G [4][0] = 0; 
   G [4][1] = 0; 
   G [4][2] = 100; 
   G [4][3] = 0; 
   G [4][4] = 0; 
   G [4][5] = 0; 
   G [4][6] = 0; 
   G [4][7] = 0; 
   G [4][8] = 0; 
   G [4][9] = 0; 
   G [4][10] = 0; 
   G [4][11] = 0; 
   G [4][12] = 0; 
   G [4][13] = 0; 
   
   G [5][0] = 0; 
   G [5][1] = 0; 
   G [5][2] = 0; 
   G [5][3] = 0; 
   G [5][4] = 0; 
   G [5][5] = 0; 
   G [5][6] = 50; 
   G [5][7] = 130; 
   G [5][8] = 23; 
   G [5][9] = 0; 
   G [5][10] = 0; 
   G [5][11] = 0; 
   G [5][12] = 0; 
   G [5][13] = 0; 
   
   G [6][0] = 0; 
   G [6][1] = 0; 
   G [6][2] = 250; 
   G [6][3] = 0; 
   G [6][4] = 0; 
   G [6][5] = 50; 
   G [6][6] = 0; 
   G [6][7] = 0; 
   G [6][8] = 0; 
   G [6][9] = 0; 
   G [6][10] = 0; 
   G [6][11] = 0; 
   G [6][12] = 0; 
   G [6][13] = 0; 

   G [7][0] = 0; 
   G [7][1] = 0; 
   G [7][2] = 0; 
   G [7][3] = 0; 
   G [7][4] = 0; 
   G [7][5] = 130; 
   G [7][6] = 0; 
   G [7][7] = 0; 
   G [7][8] = 160; 
   G [7][9] = 0; 
   G [7][10] = 0; 
   G [7][11] = 0; 
   G [7][12] = 0; 
   G [7][13] = 0; 
   
   G [8][0] = 0; 
   G [8][1] = 0; 
   G [8][2] = 0; 
   G [8][3] = 0; 
   G [8][4] = 0; 
   G [8][5] = 23; 
   G [8][6] = 0; 
   G [8][7] = 160; 
   G [8][8] = 0; 
   G [8][9] = 800; 
   G [8][10] = 0; 
   G [8][11] = 0; 
   G [8][12] = 0; 
   G [8][13] = 0; 

   G [9][0] = 0; 
   G [9][1] = 0; 
   G [9][1] = 0; 
   G [9][2] = 0; 
   G [9][3] = 0; 
   G [9][4] = 0; 
   G [9][5] = 0; 
   G [9][6] = 0; 
   G [9][7] = 0; 
   G [9][8] = 800; 
   G [9][9] = 0; 
   G [9][10] = 0; 
   G [9][11] = 0; 
   G [9][12] = 800; 
   G [9][13] = 0; 

   G [10][0] = 450; 
   G [10][1] = 0; 
   G [10][2] = 300; 
   G [10][3] = 0; 
   G [10][4] = 0; 
   G [10][5] = 0; 
   G [10][6] = 0; 
   G [10][7] = 0; 
   G [10][8] = 0; 
   G [10][9] = 0; 
   G [10][10] = 0; 
   G [10][11] = 0; 
   G [10][12] = 0; 
   G [10][13] = 0; 
   
   G [11][0] = 0; 
   G [11][1] = 0; 
   G [11][2] = 0; 
   G [11][3] = 0; 
   G [11][4] = 0; 
   G [11][5] = 0; 
   G [11][6] = 0; 
   G [11][7] = 0; 
   G [11][8] = 0; 
   G [11][9] = 0; 
   G [11][10] = 0; 
   G [11][11] = 0; 
   G [11][12] = 400; 
   G [11][13] = 450; 
   
   G [12][0] = 0; 
   G [12][1] = 0; 
   G [12][2] = 0; 
   G [12][3] = 0; 
   G [12][4] = 0; 
   G [12][5] = 0; 
   G [12][6] = 0; 
   G [12][7] = 0; 
   G [12][8] = 0; 
   G [12][9] = 800; 
   G [12][10] = 0; 
   G [12][11] = 400; 
   G [12][12] = 0; 
   G [12][13] = 0; 
   
   G [13][0] = 0; 
   G [13][1] = 800; 
   G [13][2] = 0; 
   G [13][3] = 0; 
   G [13][4] = 0; 
   G [13][5] = 0; 
   G [13][6] = 0; 
   G [13][7] = 0; 
   G [13][8] = 0; 
   G [13][9] = 0; 
   G [13][10] = 0; 
   G [13][11] = 450; 
   G [13][12] = 0; 
   G [13][13] = 0; 
    
    printf ("1. Bundaran ITS\n2. Graha\n3. Manarul Ilmi\n4. BAAK\n5. Rektorat\n");
    printf ("6. Kantin Pusat\n7. SCC\n8. Stadion\n9. FMIPA Tower\n10. FTI\n");
	printf ("11. FTSP\n12. Teknik Informatika\n13. FTK\n14. Robotika\n\n");
    
    printf("\nEnter the starting point: \n\n"); scanf("%d",&u);
    u-=1;
	printf("\nEnter the end point: \n"); scanf("%d",&end);
    end-=1;
	djikstra(G,n,u,end);	//u itu sartnode 
    
    return 0;
}
 
void djikstra(int G[MAX][MAX],int n,int startnode, int end)
{
 
    int cost[MAX][MAX],distance[MAX],pred[MAX];
    int visited[MAX],count,mindistance,nextnode,i,j;
    
    //pred[] stores the predecessor of each node
    //count gives the number of nodes seen so far
    //create the cost matrix
    for(i=0;i<n;i++)			//ngisi cost
        for(j=0;j<n;j++)
            if(G[i][j]==0)
                cost[i][j]=INFINITY; //jadi tak hingga bobotnya 
            else
                cost[i][j]=G[i][j];
    
    //initialize pred[],distance[] and visited[]
    for(i=0;i<n;i++)
    {
        distance[i]=cost[startnode][i]; 	//jarak ditaruh di array distance, jarak dari poin awal ke node tetangga semuanya
        pred[i]=startnode;					//node awal itu start node ditaruh di semua isi array prediction
        visited[i]=0;						//arry visited semua isi 0 dulu 
    }
    
    distance[startnode]=0;					//
    visited[startnode]=1;
    count=1;
    
    while(count<n-1)
    {
        mindistance=INFINITY;
        
        //nextnode gives the node at minimum distance
        for(i=0;i<n;i++)
            if(distance[i]<mindistance&&!visited[i])
            {
                mindistance=distance[i];
                nextnode=i;
            }
            
            //check if a better path exists through nextnode            
            visited[nextnode]=1;
            for(i=0;i<n;i++)
                if(!visited[i])
                    if(mindistance+cost[nextnode][i]<distance[i])
                    {
                    	printf ("%d m mindistance\n", mindistance);
                        distance[i]=mindistance+cost[nextnode][i];
                        printf ("-------------------%d m distance %d\n", distance[i],i+1);
						pred[i]=nextnode;
                    }
        count++;
    }
 
    //print the path and distance of each node
    for(i=0;i<n;i++)				//for berhenti kalau misal i nya sama dengan startnode.
        if(i!=startnode)
        {
        	if (i==end)				// cek kalau i nya itu sama dengan tujuan akhir
        	{
        		printf("\nDistance of node%d=%d",i,distance[i]);		// print jarak terpendek
         	    printf("\nPath=%d",i+1);									//nam
            	j=i;
           	 	do
           	 	{
           	    	j=pred[j];
           	     	printf("<-%d",j+1);
           	 	}
					while(j!=startnode);
			}
            
    }
}
