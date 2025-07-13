package c1;

import java.util.Comparator;

public class RollComprator implements Comparator {

	@Override
	public int compare(Object o1, Object o2) {
		// TODO Auto-generated method stub
		
		StudenCompare s1=(StudenCompare)o1;
		StudenCompare s2=(StudenCompare)o2;
		return compare(s1.marks,s2.marks);
	}

}
