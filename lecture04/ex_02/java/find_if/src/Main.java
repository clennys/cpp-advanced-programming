import java.io.BufferedReader;
import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.IOException;
import java.text.DecimalFormat;
import java.util.ArrayList;
import java.util.List;
import java.util.Vector;

public class Main {
    public static <E> Vector<E> readVectorList(String file) throws FileNotFoundException {
        BufferedReader bufReader = new BufferedReader(new FileReader(file));
        Vector<E> listOfLines = new Vector<>();

        E line;
        try {
            line = (E) bufReader.readLine();

            while (line != null) {
                listOfLines.add(line);
                line = (E) bufReader.readLine();

            }

            bufReader.close();
        } catch (IOException e) {
            throw new RuntimeException(e);
        }
        return listOfLines;
    }

    public static <E> boolean run(List<E> list, Matcher<E> matcher) {
        E e = Finder.find_if(list.iterator(), matcher);
        return e != null;
    }

    public static void main(String[] args) throws FileNotFoundException {
        boolean success = false;
        long duration = 0L;
        if (args[0].equals("int")) {
            Vector<Integer> v = new Vector<>();
            for (int i = 1; i < 1000000; i++) {
                v.add(i);
            }
            v.add(0);
            long t1 = System.nanoTime();
            success = run(v, elem -> elem == 0);
            long t2 = System.nanoTime();
            duration = t2 - t1;


        } else if (args[0].equals("string")) {
            Vector<String> arrayList = readVectorList("string.txt");
            long t1 = System.nanoTime();
            success = run(arrayList, elem -> elem.equals("0"));
            long t2 = System.nanoTime();

            duration = t2 - t1;
        }

        double time = duration /1000000000.0;
        DecimalFormat f = new DecimalFormat("0.00000");

        if (success) {
            System.out.println("The Element was found in " + f.format(time) + "s");
        } else {
            System.out.println("The Element was not found in " + f.format(time) + "s");
        }
    }
}