public class Insertion_Sort {
    public static void main(String[] args){
        int[] array = {31, 41, 59, 26, 41, 58};
        int i, aux;
        boolean disordened= true, changed = false;

        for(i = 0; i < array.length; i++){
            System.out.print(array[i] + " ");
        }

        System.out.println("");

        while(disordened && !changed) {
            for (i = 0; i < (array.length) - 1; i++) {
                if(array[i] > array[i+1]){
                    aux = array[i+1];
                    array[i+1] = array[i];
                    array[i] = aux;
                    changed = true;
                }
            }
            if(!changed){
                disordened = false;
            }
            changed = false;
        }

        for(i = 0; i < array.length; i++){
            System.out.print(array[i] + " ");
        }
    }
}
