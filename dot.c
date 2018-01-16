double dot(double a[], double b[], int length) {
	int i;
	double sum;   
	for (i=0; i<length; i++) {       //set i=0 and use <, not <=
		sum = sum + a[i]*b[i];
		}
	return sum;
	}
