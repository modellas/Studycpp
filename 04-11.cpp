		<< endl;

double est_total(int min_peas, int max_peas, int pod_count)
{
	double average_pea;
	average_pea = (max_peas + min_peas)/2.0;
	return (pod_count * average_pea);
}

