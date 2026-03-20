/*
 * Program: n42.bin
 * Function: FUN_0017bbf8
 * Entry: 0017bbf8
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0017bbf8(void)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = func_0xff2196d0(&DAT_001cb2b0,nmot,rl);
  uVar3 = func_0xff2187cc(&DAT_001cb2e4,tmot);
  uVar2 = (int)((uVar2 & 0xff) * (uVar3 & 0xff)) >> 6;
  if (0xff < uVar2) {
    uVar2 = 0xff;
  }
  loadresp = (byte)uVar2;
  DAT_003fb4cf = func_0xff221e78(&UNK_003fb4ce,B_llrein,DAT_001cb2ff);
  if ((B_llrein == '\0') || (DAT_003fb4d9 != '\0')) {
    DAT_003fb4da = false;
  }
  else {
    DAT_003fb4da = true;
  }
  DAT_003fb4d9 = B_llrein;
  if ((bool)DAT_003fb4da) {
    if (DAT_003fb4d1 == '\0') {
      DAT_003fb4d1 = func_0xff21a054(DAT_001cb288,&DAT_001cb28a,DAT_001cb289,&DAT_001cb290,
                                     &DAT_001cb298,tmst,kmstand);
    }
    if (DAT_003fb4d0 == '\0') {
      DAT_003fb4d0 = func_0xff21a054(DAT_001cb260,&DAT_001cb262,DAT_001cb261,&DAT_001cb268,
                                     &DAT_001cb270,tmst,kmstand);
    }
  }
  if (B_llrein == '\0') {
    DAT_003fb4d2 = '\0';
  }
  else if ((((((DAT_001cb306 < vfzg) || (DAT_001cb2fa < nmot)) || (DAT_001cb2fb < rl)) ||
            ((DAT_001cb2fd < tkatm || (fho < DAT_001cb2f8)))) ||
           ((tmotab < DAT_001cb300 || ((tumg <= DAT_001cb301 || (DAT_001cb302 <= tumg)))))) ||
          ((tabst_w <= _DAT_001cb2f2 || (_DAT_001cb2f4 <= tabst_w)))) {
    DAT_003fb4d2 = '\x01';
  }
  if (DAT_003fb4d2 == '\0') {
    if (B_llrein == '\0') {
      B_genoffst = true;
    }
    else {
      bVar1 = vfzg;
      if (((DAT_001cb2fc == '\0') || (bVar1 = B_stend, B_ll == '\0')) && (bVar1 != 0)) {
        B_genoffst = DAT_003fb4d1 != '\0';
      }
      else {
        B_genoffst = DAT_003fb4d0 != '\0';
      }
    }
  }
  else {
    B_genoffst = false;
  }
  if (DAT_001cb2f6 == '\x01') {
    if (((bool)B_genoffst) || (B_genoffvl != 0)) {
      B_genoffmd = 1;
    }
    else {
      B_genoffmd = 0;
    }
  }
  else {
    B_genoffmd = 0;
  }
  tlrgen = DAT_001cb2f9;
  if ((DAT_001cb2f7 != '\x01') && (tlrgen = DAT_001cb2ff, DAT_003fb4cf != '\0')) {
    tlrgen = loadresp;
  }
  tlrgen2 = DAT_001cb2f9;
  if ((DAT_001cb2f7 != '\x01') && (tlrgen2 = DAT_001cb2ff, DAT_003fb4cf != '\0')) {
    tlrgen2 = loadresp;
  }
  return;
}

