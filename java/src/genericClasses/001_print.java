package genericClasses;

class GenericPrint {
    <Generic> void gprint(Generic a) {
        System.out.println(a);
    }
}

class Test1{
    public static void main(String[] args){
        GenericPrint obj = new GenericPrint();
        obj.gprint(1);
        obj.gprint('c');
        obj.gprint("String");
        obj.gprint(1.5);
    }
}