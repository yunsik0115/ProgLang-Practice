public class VarEx2 {
    private int x = 10;
    private int y = 20;
    private int tmp = 0;

    public void printResult(){
        System.out.println("VarEx2 - 실습 결과");
        tmp = x;
        x = y;
        y = tmp;
        System.out.println("Swap Result Below");
        System.out.println("x = " + x);
        System.out.println("y = " + y);
    }
}
