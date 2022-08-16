package genericClasses;

class GenericSwap {
    <Generic> void swap(Generic a, Generic b) {
        Generic temp = a;
        System.out.print(a + " -> " + b + " = ");
        a = b;
        b = temp;
        System.out.println(a + " -> " + b);

        // This function may swap classes obj too
    }
}

class Test2 {
    public static void main(String[] args) {
        GenericSwap obj = new GenericSwap();

        obj.swap("a", "b");
        obj.swap(1, 2);
        obj.swap(1.5, 2.6);

    }
}