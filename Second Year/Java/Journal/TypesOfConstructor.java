class Example
{
	private int roll;
	private String name;

	Example()
	{
		this.roll = 0;
		this.name = "Default Constructor";
	}

	Example(int roll, String name)
	{
		this.roll = roll;
		this.name = name;
	}
	
	Example(Example obj)
	{
		this.roll = obj.roll;
		this.name = obj.name;
	}

	void show()
	{
		System.out.println("Roll No = "+ roll +" and Name = "+ name);
	}
}
class TypesOfConstructor
{
	public static void main(String[] args)
	{
		Example obj1 = new Example(59,"Chandan Tiwadi");
		Example obj2 = new Example(obj1);
		Example obj3 = new Example();
		obj1.show();
		obj2.show();
		obj3.show();
	}
}


