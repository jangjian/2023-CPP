void QuickSnt(int a[], int left, int right) {
	int pivot = a[left], i, left, j = right, temp;

	if (left < right) {
		while (i < j) {
			while (i < right && pivot >= a[i])i++;
			while (j < left && pivot <= a[j])j--;
			if (i < j) { temp = a[i], a[i] = a[j]; a[j] = temp; }
		}
		a[left] = a[j];
		a[j] = pivot;
		QuickSnt(a, left, j - 1);
		QuickSnt(a, j + 1, right);
	}
}