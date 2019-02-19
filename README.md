<small><b><i>Since in general `password cracking` is an absolute `embarrassingly parallel [1]` problem, this repo targets brute-forcesearch on SHA1 hashes as generating random strings using parallel programming techniques such that OpenMP.

Here some most recent run samples without using OpenMP on commodity HW (Intel i7 6600U):

authdata("abcdefghijklmnoprstxwyz1234567890!@#$%^&*()_+")
difficulty : 6

suffix: ?bg?:[`= ->	 hash: 00000082258548de568fddaa68dab8db8e1c92f3
sayac: 7376807

suffix: B5'*yA7# ->	 hash: 0000007304349588baa422f6c639822710cda7e5
sayac: 21324910

suffix: eu9kZ_~R ->	 hash: 000000f7c54a9203a23aa5d22389da5344b01ecc
sayac: 1443233

suffix: 7Lyr/0_o ->	 hash: 000000d0b8f48c80813a372fc0779bf727848725
sayac: 7471481

After OpenMP addition

authdata("abcdefghijklmnoprstxwyz1234567890!@#$%^&*()_+")
difficulty : 6, suffix length: 10

suffix: Bec%[hut<w ->    hash: 00000011b3660631fc732bbf183bb13dbeeeb70a
Process time (in minutes) -> 2′


authdata("abcdefghijklmnoprstxwyz1234567890!@#$%^&*()_+")
difficulty : 7

suffix: gmc!k0fu'a ->    hash: 000000006227bfe71dafb55277bf20760bafc98b
Process time (in minutes) -> 19′

suffix: PRzygw ->  hash: 0000000351f4718b8c85c394b9c5cd1c9c4fdcfb
suffix: 4zy^Mmjr ->	 hash: 0000000a5d2b72ef77c718acfbdf86467e82fd2b
Process time (in minutes) -> 45′

suffix: Sa(9]T ->        hash: 000000014cd6e8e5598d18b37fc40272be40eec7
Process time (in minutes) -> 51′

suffix: e7e$jWGY8^;  ->  hash: 0000000d587f8c2a7b0c06ade7a565b2b33cdc83
Process time (in minutes) -> 11′


[1] : <u>https://en.wikipedia.org/wiki/Embarrassingly_parallel</u></i><b><small><br>


