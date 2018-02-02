public class BankAccount {
	public static void main(String [] args){
		double balence = 1000.0;
		double rate = 0.1;

		double interest = balence * rate;

		System.out.println("interest after one year is:" + interest);
	}
}