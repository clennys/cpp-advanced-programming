import java.util.Iterator;

public class Finder {
    public static <E> E find_if(Iterator<E> iter, Matcher<E> matcher) {
        E e;

        while (iter.hasNext()) {
            e = (E) iter.next();
            if (matcher.match(e)) {
                return e;
            }
        }
        return null;

    }
}
