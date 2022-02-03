public class PrintfEx1 {
    private byte b = 1;
    private short s = 2;
    private char c = 'A';

    private int finger = 10;
    private long big = 100_000_000_000L;
    private long hex = 0xFFFF_FFFF_FFFF_FFFFL;

    private int octNum = 010; // 8진수로 10, 10진수는 6
    private int hexNum = 0x10; // 16진수로 10, 10진수 16
    private int binNum = 0b10; // 2진수로 10, 10진수 2

    public void printResult(){
        System.out.printf("b = %d%n", b);
        System.out.printf("s = %d%n", s);
        System.out.printf("c = %c, %d %n", c, (int) c); // type casting & printing (ASCII NUMBER) Must Casted Before Printing with %d
        System.out.printf("finger = [%5d]%n", finger);
        System.out.printf("finger = [%-5d]%n", finger);
        System.out.printf("finger = [%05d]%n", finger);
        System.out.printf("big = %d%n", big);
        System.out.printf("hex=%#x%n", hex); // #은 접두사 16진수 0x, 8진수 0
        System.out.printf("octNum = %o, %d%n", octNum, octNum);
        System.out.printf("hexNum = %x, %d%n", hexNum, hexNum);
        System.out.printf("binNum = %s, %d%n", Integer.toBinaryString(binNum), binNum);
    }
}
