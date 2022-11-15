import java.io.BufferedReader;
import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.IOException;
import java.util.ArrayList;
import java.util.List;

public class Main {
    public static <E> ArrayList<E> readArrayList(String file) throws FileNotFoundException {
        BufferedReader bufReader = new BufferedReader(new FileReader(file));
        ArrayList<E> listOfLines = new ArrayList<>();

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
            ArrayList<Integer> arrayList = readArrayList("int.txt");
            long t1 = System.nanoTime();
            success = run(arrayList, elem -> elem == 0);
            long t2 = System.nanoTime();
            duration = t2 - t1;


        } else if (args[0].equals("string")) {
            ArrayList<String> arrayList = readArrayList("string.txt");
            long t1 = System.nanoTime();
            success = run(arrayList, elem -> elem.equals("0"));
            long t2 = System.nanoTime();

            duration = t2 - t1;
        }

        duration /= 1000000000;

        if (success) {
            System.out.println("The Element was found in " + duration + "s");
        } else {
            System.out.println("The Element was not found in " + duration + "s");
        }
    }
}