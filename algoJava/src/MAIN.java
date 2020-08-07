import java.lang.reflect.Array;
import java.util.Arrays;
import java.util.PriorityQueue;
import java.util.Scanner;
import java.util.Vector;

class Pair<T1, T2> implements Comparable<Pair>{
    public T1 first;
    public T2 second;

    public Pair(T1 first, T2 second) {
        this.first = first;
        this.second = second;
    }

    @Override
    public int compareTo(Pair o) {
        return Long.compare((Long) this.first, (Long) o.first);
    }
}

public class MAIN {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int nodes = scan.nextInt(), edges = scan.nextInt(), startNode = scan.nextInt(), endNode = scan.nextInt();

        Vector<Vector<Pair<Integer, Long>>> graph = new Vector<>();
        for(int i = 0 ; i <= nodes ; i++)
        {
            graph.add(new Vector<>());
        }
        for(int i = 0 ; i < edges ; i++)
        {
            int u = scan.nextInt(), v = scan.nextInt();
            long weight = scan.nextLong();
            graph.elementAt(u).add(new Pair<>(v, weight));
            graph.elementAt(v).add(new Pair<>(u, weight));
        }

        PriorityQueue<Pair<Long, Integer>>pq = new PriorityQueue<>();
        Long[] maxLength = new Long[nodes + 1];
        Arrays.fill(maxLength, Long.MAX_VALUE);

        maxLength[startNode] = 0L;
        pq.add(new Pair<>(0L, startNode));

        while(!pq.isEmpty())
        {
            Long lengthSoFar = pq.peek().first;
            int currentNode = pq.peek().second;

            pq.remove();

            if(currentNode == endNode)
            {
                System.out.println(lengthSoFar);
                System.exit(0);
            }

            if(lengthSoFar != maxLength[currentNode])
                continue;

            for(int i = 0 ; i < graph.elementAt(currentNode).size() ; i++)
            {
                int child = graph.elementAt(currentNode).elementAt(i).first;
                long costToChild = graph.elementAt(currentNode).elementAt(i).second;

                long totalToChild = costToChild + lengthSoFar;

                if(totalToChild < maxLength[child])
                {
                    maxLength[child] = totalToChild;
                    pq.add(new Pair<>(totalToChild, child));
                }

            }
        }

        System.out.println("No Path Exists");
    }
}
