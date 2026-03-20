/*
 * Program: n42.bin
 * Function: FUN_001172f4
 * Entry: 001172f4
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_001172f4(int *param_1)

{
  char cVar1;
  
  if (tmot < DAT_001d1a33) {
    DAT_003fb32e = '\0';
  }
  else {
    cVar1 = *(char *)(*param_1 + 2);
    DAT_003fb32e = DAT_001d1a2d;
    if ((cVar1 <= DAT_001d1a2d) && (DAT_003fb32e = cVar1, cVar1 < DAT_001d1a2c)) {
      DAT_003fb32e = DAT_001d1a2c;
    }
  }
  cVar1 = *(char *)(*param_1 + 3);
  dnsacmv = DAT_001d1a2f;
  if ((cVar1 <= DAT_001d1a2f) && (dnsacmv = cVar1, cVar1 < DAT_001d1a2e)) {
    dnsacmv = DAT_001d1a2e;
  }
  cVar1 = *(char *)(*param_1 + 4);
  DAT_005b89fa = DAT_001d1a31;
  if ((cVar1 <= DAT_001d1a31) && (DAT_005b89fa = cVar1, cVar1 < DAT_001d1a30)) {
    DAT_005b89fa = DAT_001d1a30;
  }
  cVar1 = *(char *)(*param_1 + 5);
  dnfsacmv = DAT_001d1a29;
  if ((cVar1 <= DAT_001d1a29) && (dnfsacmv = cVar1, cVar1 < DAT_001d1a28)) {
    dnfsacmv = DAT_001d1a28;
  }
  if (tmot < DAT_001d1a34) {
    DAT_003fb32f = '\0';
  }
  else {
    cVar1 = *(char *)(*param_1 + 6);
    DAT_003fb32f = DAT_001d1a2b;
    if ((cVar1 <= DAT_001d1a2b) && (DAT_003fb32f = cVar1, cVar1 < DAT_001d1a2a)) {
      DAT_003fb32f = DAT_001d1a2a;
    }
  }
  return;
}

