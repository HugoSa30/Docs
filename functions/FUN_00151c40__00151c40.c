/*
 * Program: n42.bin
 * Function: FUN_00151c40
 * Entry: 00151c40
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00151c40(void)

{
  short sVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  
  if (B_nswo1 == '\0') {
    if (((DAT_005b89ed & 1) == 0) && ((DAT_005b89ed >> 1 & 1) == 0)) {
      iVar3 = ((uint)(byte)(&DAT_001d1a68)[esst_stm06llub >> 0x10] +
               ((int)((esst_stm06llub & 0xffff) *
                     ((uint)(byte)(&DAT_001d1a69)[esst_stm06llub >> 0x10] -
                     (uint)(byte)(&DAT_001d1a68)[esst_stm06llub >> 0x10])) >> 0x10) & 0xff) +
              (int)DAT_005b89f8;
      if (iVar3 < 0) {
        iVar3 = 0;
      }
      else if (0xff < iVar3) {
        iVar3 = 0xff;
      }
      nsllm = (undefined)iVar3;
      iVar3 = ((uint)(byte)(&DAT_001d1a58)[esst_stm06llub >> 0x10] +
               ((int)((esst_stm06llub & 0xffff) *
                     ((uint)(byte)(&DAT_001d1a59)[esst_stm06llub >> 0x10] -
                     (uint)(byte)(&DAT_001d1a58)[esst_stm06llub >> 0x10])) >> 0x10) & 0xff) +
              (int)DAT_005b89f7;
      if (iVar3 < 0) {
        iVar3 = 0;
      }
      else if (0xff < iVar3) {
        iVar3 = 0xff;
      }
      nsfsm = (undefined)iVar3;
    }
    else {
      iVar3 = ((uint)(byte)(&DAT_001d1a70)[esst_stm06llub >> 0x10] +
               ((int)((esst_stm06llub & 0xffff) *
                     ((uint)(byte)(&DAT_001d1a71)[esst_stm06llub >> 0x10] -
                     (uint)(byte)(&DAT_001d1a70)[esst_stm06llub >> 0x10])) >> 0x10) & 0xff) +
              (int)DAT_005b89f8;
      if (iVar3 < 0) {
        iVar3 = 0;
      }
      else if (0xff < iVar3) {
        iVar3 = 0xff;
      }
      nsllm = (undefined)iVar3;
      iVar3 = ((uint)(byte)(&DAT_001d1a60)[esst_stm06llub >> 0x10] +
               ((int)((esst_stm06llub & 0xffff) *
                     ((uint)(byte)(&DAT_001d1a61)[esst_stm06llub >> 0x10] -
                     (uint)(byte)(&DAT_001d1a60)[esst_stm06llub >> 0x10])) >> 0x10) & 0xff) +
              (int)DAT_005b89f7;
      if (iVar3 < 0) {
        iVar3 = 0;
      }
      else if (0xff < iVar3) {
        iVar3 = 0xff;
      }
      nsfsm = (undefined)iVar3;
    }
    DAT_003fb332 = (&DAT_001c84e4)[esst_stm06llub >> 0x10] +
                   (char)((esst_stm06llub & 0xffff) *
                          ((uint)*(byte *)((esst_stm06llub >> 0x10) + 0x1c84e5) -
                          (uint)(byte)(&DAT_001c84e4)[esst_stm06llub >> 0x10]) >> 0x10);
    DAT_003fb333 = (&DAT_001c84ec)[esst_stm06lltub >> 0x10] +
                   (char)((esst_stm06lltub & 0xffff) *
                          ((uint)*(byte *)((esst_stm06lltub >> 0x10) + 0x1c84ed) -
                          (uint)(byte)(&DAT_001c84ec)[esst_stm06lltub >> 0x10]) >> 0x10);
    if (B_nsub == 0) {
      sVar1 = func_0xff217fe8((uint)DAT_001d1a8d << 8,0,_DAT_003fb336);
      DAT_003fb336 = (byte)((ushort)sVar1 >> 8);
      DAT_005b89fd = DAT_003fb336;
      _DAT_003fb336 = sVar1;
    }
    else if ((DAT_003fb33a & 2) == 0) {
      DAT_005b89fd = nstat;
      _DAT_003fb336 = (ushort)nstat << 8;
    }
    else {
      uVar4 = (uint)DAT_005b8eca + (int)DAT_005b89fa;
      if ((int)uVar4 < 0) {
        uVar4 = 0;
      }
      else if (0xff < (int)uVar4) {
        uVar4 = 0xff;
      }
      sVar1 = func_0xff217fe8((uint)DAT_001d1a8d << 8,uVar4 & 0xff,_DAT_003fb336);
      DAT_003fb336 = (byte)((ushort)sVar1 >> 8);
      DAT_005b89fd = DAT_003fb336;
      _DAT_003fb336 = sVar1;
    }
    bVar2 = func_0xff2187cc(&DAT_001d1a78,DAT_005b8b76);
    DAT_003fb330 = DAT_005b89fd;
    if (DAT_005b89fd <= bVar2) {
      DAT_003fb330 = bVar2;
    }
    bVar2 = func_0xff2187cc(&DAT_001d1a84,DAT_005b8b76);
    DAT_003fb331 = DAT_005b89fd;
    if (DAT_005b89fd <= bVar2) {
      DAT_003fb331 = bVar2;
    }
  }
  if (B_nsub == 0) {
    DAT_003fb33a = DAT_003fb33a & 0xfd;
  }
  else {
    DAT_003fb33a = DAT_003fb33a | 2;
  }
  if (B_fallsa == '\0') {
    DAT_005b89fb = 5;
  }
  else {
    DAT_005b89fb = 0;
  }
  return;
}

