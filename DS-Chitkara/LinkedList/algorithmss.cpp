// For Linear Search

Step 1: [INITIALIZE] SET FLAG  = 0
Step 2: [INITIALIZE] SET I = lower_bound
Step 3:       Repeat Step 4 while I <= arr_size
Step 4:             IF arr[I] =VAL
                                SET POS = I
                                SET FLAG = 1
                                PRINT “VAL is Present at Location POS”
                                Go to Step 6
                         [END OF IF]
                         SET I = I+1
                    [END OF LOOP]
Step 5: IF FLAG == 0
             PRINT “VALUE IS NOT PRESENT IN THE ARRAY”
             [END OF IF]
Step 6: EXIT

// For Insertion

Step 1: [INITIALIZATION] SET I = N
Step 2: Repeat Steps 3 and 4 while I >= POS
Step 3: SET A[I + 1] = A[I]
Step 4: SET I = I–1
        [END OF LOOP]
Step 5: SET N = N+1
Step 6: SET A[POS] = VAL
Step 7: EXIT

// Delete By position

Step 1: [INITIALIZATION] SET I = POS
Step 2: Repeat Steps 3 and 4 while I <= N-1
Step 3: SET A[I] = A[I + 1]
Step 4: SET I = I+1
        [END OF LOOP]
Step 5: SET N = N-1
Step 6: EXIT

// Display

Step 1: [INITIALIZATION] SET I = lower_bound
Step 2: Repeat Steps 3 to 4 while I <= upper_bound
Step 3: PRINT A[I]
Step 4: SET I=I+1
        [END OF LOOP]
Step 5: EXIT



// Bubble_Sort

Step 1: [INITIALIZE] SET I  = 0
Step 2: [INITIALIZE] SET J = 0
Step 3: Repeat Step 4 while I < arr_size
Step 4:       Repeat Step 5 while J < arr_size - I -1
Step 5:             IF arr[J] > arr[J + 1]
                              SWAP arr[J] and arr[J+1]
                    [END OF IF]
               [END OF LOOP]
               SET I = I+1
          [END OF LOOP]
Step 6: EXIT


// Binary_Search

Step 1: [INITIALIZE] SET start =lower_bound
               last = upper_bound
Step 2: Repeat Steps 3 and 4 while start <= last
Step 3:       SET mid =(start +last)/2
Step 4:       IF arr[mid] = num
                        SET pos =mid+1
                        Go to Step 6
                  ELSE IF arr[mid] >num
                         SET last =mid - 1
                  ELSE
                         SET start =mid + 1
                 [END OF IF]
              [END OF LOOP]
Step 5: IF pos >= 0
             PRINT "VALUE IS PRESENT AT POS LOCATION"
             [END OF IF]

Step 6: ELSE
               PRINT “VALUE IS NOT PRESENT IN THE ARRAY”

