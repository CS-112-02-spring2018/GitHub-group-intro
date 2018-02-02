public class DrawTriangle {
	public static void main(String[] args) {
		
		System.out.println("java DrawTriangle"+" ");
// assign the object, and get the input from command line.
		int number = Integer.parseInt(args[0]);
		int i = 0;
		int j = 0;
//print "[]" while input is even.
		if ((number&1)==0) {
			
			for (int i=1; i<=number;++i)
			{
				for(int j=1; j<1; ++j)
				{
				System.out.print("[]");
				}
				System.out.println();
			}

		}
//print "()" while input is odd.
		else{
			for (int i<1; i<=number;++i)
			{
				for(int j=1; j<1; ++j)
				{
				System.out.print("()");
				}
				System.out.println();
			}
		}
	}
}