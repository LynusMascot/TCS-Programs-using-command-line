//Author : Rohit Goswami


public class Main
{
	public static void main(String[] args) {
	
	if(args.length>0){
	    
	    int a= Integer.valueOf(args[0]);
	    if(a%2==0){
	        System.out.println("even");
	    }
	    else{ System.out.println("odd");}
	}
	else{
	    System.out.println("not enough arguments");
	}
	
	}
}
