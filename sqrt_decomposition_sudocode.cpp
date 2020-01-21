arr[N];
int L = sqrt( N );
int rmq[L];

16
3,13
[ 0-3 , 4-7 , 8-11 , 12-15  ]
   0     1     2      3
start  1
end  2

for(3 to 3)
for(12 to 13)

pre(){
	// 0,1,2,3
	for(int i=0;i<L;i++){
		rmq[i] = findMinArr( i*L, i*L + L-1 , arr );
	}
}

int find(int i, int j){
	int start = ;
	int end   = ;

	int minRMQ = findMinArr(start,end,rmq);

	for( 3 to  3 )
	for( 12 to  13 )

}





