import java.util.Scanner;
public class insertionSort{
    public static void main(String[] args){
        int key,i;
        Scanner scanner = new Scanner(System.in);
        System.out.println("no of input:");
        int n=scanner.nextInt();
        int[] array = new int[n];

        for(int l=0;l<n;l++){
            System.out.println("l:");
            array[l]=scanner.nextInt();
        }
        for(int j=1;j<array.length;j++){
            key=array[j];
            i=j-1;
            while(i>=0 && array[i]>key){
                array[i+1]=array[i];
                i=i-1;
               System.out.println("value of i:" + i);
        }
        array[i+1]=key;
    }
    for(int k=0;k<array.length;k++){
        System.out.println(array[k]);
    }
}
}