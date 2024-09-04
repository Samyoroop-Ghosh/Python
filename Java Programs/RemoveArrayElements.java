import java.util.Scanner;

public class RemoveArrayElements {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter no of elements : ");
		int n = sc.nextInt();
		int arr[] = new int[n];
		for (int i = 0; i < n; i++) {
			System.out.println("Enter arr[" + i + "] : ");
			arr[i] = sc.nextInt();
		}

		System.out.println("\nEnter an element to delete :");
		int delElement = sc.nextInt();

		for (int i = 0; i < n; i++) {
			if (arr[i] == delElement) {
				for (int j = i; j < n - 1; j++) {
					arr[j] = arr[j + 1];
				}
				n--;
			}
		}

		System.out.println("\nAfter removing "+delElement+" : ");
		for (int i = 0; i < n; i++) {
			System.out.print(arr[i]+"\t");
		}
		sc.close();
	}

}