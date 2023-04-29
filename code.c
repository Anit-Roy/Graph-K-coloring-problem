#include<stdio.h>
#include<malloc.h>

struct vertex
{
	int id, color;
};

struct stackrecord
{
     struct vertex * vlist;
	int top;
}history;

int ** graph;
int n, m;
int num_of_colorings;

void backtrackcoloring();
void getinputgraph();
char givencolorworks(int, int);

int main()
{
    int i,j,k;
    getinputgraph();
    backtrackcoloring();
    printf("\n\t total number of valid colorings=%d\n\n", num_of_colorings);
    return 0;
}

void backtrackcoloring()
{   
	int i;
	history.top=0;
	history.vlist[history.top].id=0;
	history.vlist[history.top].color=0;	
	do
	{
		history.vlist[history.top].color++;
		if(history.vlist[history.top].color <= m)
		{
			if( givencolorworks(history.vlist[history.top].color, history.vlist[history.top].id) )
			{
				if(history.top < n-1)
				{
					history.top++;
					history.vlist[history.top].id = history.vlist[history.top-1].id + 1;
					history.vlist[history.top].color = 0;
				}
				else
				{
					for(printf("\nvalid coloring= "),num_of_colorings++, i=0;i<n;i++ )
						printf("%d ", history.vlist[i].color);
				}
			}
		}
		else
		{
			history.top--;
		}			
	}while(history.top >=0  );
}

char givencolorworks(int color, int v)
{
	int i;
	for(i=0; graph[v][i]!=-1; i++)
	{
		if(history.vlist[graph[v][i]].color == color)
			return 0;
	}
	return 1;
}

void getinputgraph()
{
    int i,j, k, count;
	
    printf("Enter the number of vertices: ");
    scanf("%d", &n);
    graph=(int*)malloc(n * sizeof(int));
    history.vlist=(struct vertex*)malloc(n*sizeof(struct vertex));
    history.top=-1;

    for(i=0;i<n;i++)
    {
        printf("how many vertices are adjacent to vertex %d= ?", i);
        scanf("%d", &count);
        graph[i]=(int*)malloc((count) * sizeof(int));
        printf("Enter vertex numbers in increasing order:- ");
        for (k = 0; k < count; k++) {
           scanf("%d", &graph[i][k] );
        }
    }

    printf("Enter the number of COLOURS: ");
    scanf("%d", &m);
}



