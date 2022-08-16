package genericClasses;

class GenericClass<Generic> {
    private Generic variable;

    public GenericClass(Generic variable) {
        this.variable = variable;
    }

    void getVariable() {
        System.out.println(variable);
    }
}

class Test4 {
    public static void main(String[] args) {
        GenericClass<Integer> obj1 =new GenericClass<Integer>(1);
        GenericClass<Double> obj2 =new GenericClass<Double>(1.3);
        GenericClass<String> obj3 =new GenericClass<String>("String");

        obj1.getVariable();
        obj2.getVariable();
        obj3.getVariable();
    }
}