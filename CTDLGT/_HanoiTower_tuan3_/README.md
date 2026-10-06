Bài tập tuần 3: Tháp Hà Nội

1. Bài toán:
  Có 3 cột A, B, C và n đĩa xếp trồng lên nhau sao cho đĩa nhỏ hơn nằm trên đĩa lớn.
  Ta cần chuyển n đĩa từ cột đầu tới cột đích sao cho:
   + Mỗi lần chỉ được chuyển 1 đĩa.
   + Đĩa to hơn không được nằm trên đĩa bé hơn dù chỉ là tạm thời.

2. Giải thuật
 2.1 Bài toán cơ sở:
     - Nếu chỉ có 1 đĩa cần chuyển từ A sang C thì:
      Ta chuyển đĩa 1 từ A sang C.

     - Nếu có 2 đĩa cần chuyển từ A sang C thì:
       + Ta chuyển đĩa 1 từ A sang B
       + Ta chuyển đĩa 2 từ A sang C
       + Ta chuyển đĩa 1 từ C sang B
 2.2 Đệ quy:
  Giả sử ta cần chuyển n đĩa từ cột A sang C:
  - B1: Ta chuyển n-1 đĩa tùư A sang B
  - B2: Ta chuyển đĩa n từ A sang C
  - B3: Ta chuyển n-1 đĩa từ C sang B

3. Test case:
 3.1 Test case 1:
  - Input: n = 1, start = A, mid = B, end = C.
  - Output: Move the disk from A to C
 
 3.2 Test case 2:
  - Input: n = 2, start = A, mid = C, end = B
  - Output: Move disk 1 from A to C
            Move disk 2 from A to B
            Move disk 1 from C to B
 3.3 Test case 3:
  - Input: n = 3, start = B, mid = A, end = C
  - Output: Move disk 1 from B to C
            Move disk 2 from B to A
            Move disk 1 from C to A
            Move disk 3 from B to C
            Move disk 1 from A to B
            Move disk 2 from A to C
            Move disk 1 from B to C

  
