# inputM.txt: Matrix M  ma trận cụm (inter-level proximity matrix)
# inputD.txt: Matrix dangling
# inputA.txt: Matrix A connectivity (ket noi)
# Result    = transpose(sA + sD + uM + (1 -s -u)E)
#           = transpose(0.75*A + 0.75*D + 0.15 * M + 0.1 * E)
# Rank = vector(1/n)
# Rank = Result * Rank (Repeat 100)
Output="MatrixOutput_"`date +%g%m%d_%H_%M_%S`".txt"
echo $Output
g++ mainMatrixOperator.cpp matrixOperator.cpp fractionOperator.cpp;
./a.out $1 > $Output
cat $Output
