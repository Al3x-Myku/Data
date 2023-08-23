set title 'Data Histogram'
set xlabel 'Value'
set ylabel 'Frequency'
set style fill solid
set boxwidth 0.9 relative
set style histogram clustered
set style data histograms
set ytics
set grid y
plot 'data.txt' using 1:($0+1) with boxes title 'Histogram'
