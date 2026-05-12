make clean && make && \
echo "Running Test 1..."  && ./compile < "../Project 3 Test Data/test1.txt" && \
echo "Running Test 2..."  && ./compile < "../Project 3 Test Data/test2.txt" && \
echo "Running Test 3..."  && ./compile < "../Project 3 Test Data/test3.txt" && \
echo "Running Test 4..."  && ./compile < "../Project 3 Test Data/test4.txt" && \
echo "Running Test 5..."  && ./compile < "../Project 3 Test Data/test5.txt" && \
echo "Running Test 6..."  && ./compile < "../Project 3 Test Data/test6.txt" && \
echo "Running Test 7..."  && ./compile < "../Project 3 Test Data/test7.txt" && \
echo "Running Test 8..."  && ./compile < "../Project 3 Test Data/test8.txt" && \
echo "Running Test 9..."  && ./compile < "../Project 3 Test Data/test9.txt" && \
echo "Running Test 10..." && ./compile < "../Project 3 Test Data/test10.txt" && \
echo "Running Test 11..." && ./compile < "../Project 3 Test Data/test11.txt" 6.8 && \
echo "Running Test 12..." && ./compile < "../Project 3 Test Data/test12.txt" 16 15.9 && \
echo "Running Test 13..." && ./compile < "../Project 3 Test Data/test13.txt" && \
echo "Running Test 14..." && ./compile < "../Project 3 Test Data/test14.txt" && \
echo "Running Test 15..." && ./compile < "../Project 3 Test Data/test15.txt" 1 2.5 65 && \
echo "Running Test 16a..." && ./compile < "../Project 3 Test Data/test16.txt" 1 1 && \
echo "Running Test 16b..." && ./compile < "../Project 3 Test Data/test16.txt" 1 -1 && \
echo "Running Test 16c..." && ./compile < "../Project 3 Test Data/test16.txt" 1 0 && \
echo "Running Test 16d..." && ./compile < "../Project 3 Test Data/test16.txt" -1 1 && \
echo "Running Test 16e..." && ./compile < "../Project 3 Test Data/test16.txt" -1 -1 && \
echo "Running Test 16f..." && ./compile < "../Project 3 Test Data/test16.txt" -1 0 && \
echo "Running Test 16g..." && ./compile < "../Project 3 Test Data/test16.txt" 0 5 && \
echo "Running Test 16h..." && ./compile < "../Project 3 Test Data/test16.txt" 0 0
