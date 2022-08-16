package genericClasses;

// varargs
class VariableArgument {

    // problem
    // <Generic> void type1(Generic a[]) {
    // System.out.println("array : " + a);
    // }

    // <Generic> void type2(Generic... b) {
    // System.out.println("elips : " + b);
    // }

    <Generic> void type3(Object... obj) {
        System.out.print("object type : ");
        for (Object o : obj) {
            System.out.print(o + ", ");
        }
        System.out.println();
    }
}

class Test3 {
    public static void main(String[] args) {
        VariableArgument obj = new VariableArgument();
        obj.type3();
        obj.type3("string", 'c', 1, 1.4, null, true);
    }
}