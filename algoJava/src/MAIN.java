import java.lang.reflect.Array;
import java.util.Arrays;
import java.util.Scanner;
import java.util.Vector;

public class MAIN {

    static void constructWithAdjMatrix(int nodes, int edges)
    {
        Scanner scan = new Scanner(System.in);
        int[][] graph = new int[nodes + 1][nodes + 1];

        for(int i = 0; i < edges ; i++)
        {
            int u = scan.nextInt(), v = scan.nextInt();
            graph[u][v] = 1;
            graph[v][u] = 1;
        }

        for(int i = 1 ; i <= nodes ; i++)
        {
            for(int j = 1 ; j <= nodes ; j++)
            {
                System.out.printf("%d ", graph[i][j]);
            }
            System.out.println();
        }
    }

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int nodes = scan.nextInt(), edges = scan.nextInt();

        Vector<Vector<Integer>> graph = new Vector<>();
        for(int i = 0 ; i <= nodes ; i++)
        {
            graph.add(new Vector<>());
        }
        for(int i = 0 ; i < edges ; i++)
        {
            int u = scan.nextInt(), v = scan.nextInt();
            graph.elementAt(u).add(v);
            graph.elementAt(v).add(u);
        }

        for(int i = 1 ; i <= nodes ; i++)
        {
            System.out.printf("Node %d children: ", i);
            for(int j = 0 ; j < graph.elementAt(i).size() ; j++)
                System.out.printf("%d ", graph.elementAt(i).elementAt(j));
            System.out.println();
        }
    }
}
