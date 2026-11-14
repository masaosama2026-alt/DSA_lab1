//lab0 - First program : sum and average of the whole numbers 1 to 4
 #include <iostream>
 using namespace std;

 int main() {
	 int count = 4;
	 int sum = 0;
	
		 for (int i = 1; i <= count; i++) {
		 sum = sum + i;
		
	}
	
		 double average = double(sum) / count;
	
		 cout << "Sum = " << sum << endl;
	cout << "Average = " << average << endl;

	return 0;
}