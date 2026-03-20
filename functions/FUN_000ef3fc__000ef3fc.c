/*
 * Program: n42.bin
 * Function: FUN_000ef3fc
 * Entry: 000ef3fc
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_000ef3fc(void)

{
  uint uVar1;
  word wVar2;
  byte bVar3;
  
  bVar3 = 0;
  do {
    uVar1 = (uint)(short)(((ushort)wvesp - (ushort)wea) * 3);
    if ((int)uVar1 < 0) {
      uVar1 = 0;
    }
    (*(code *)&SUB_00068e78)(uVar1 & 0xffff,(uint)bVar3,0);
    wVar2 = (ushort)bVar3 * 0xb4 - (((ushort)wea + (ushort)wes) * 3 + -0x6c);
    (&abbwevz)[bVar3] = wVar2;
    if (B_nmin != '\0') {
      (*(code *)&SUB_00068c20)((int)(short)wVar2,bVar3);
    }
    bVar3 = bVar3 + 1;
  } while (bVar3 < 4);
  return;
}

