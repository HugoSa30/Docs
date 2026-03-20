/*
 * Program: n42.bin
 * Function: FUN_0019aa80
 * Entry: 0019aa80
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0019aa80(void)

{
  int iVar1;
  undefined uVar2;
  uint uVar3;
  
  uVar3 = (uint)gangi;
  uVar2 = UEVERG;
  if ((uVar3 != 0) && (uVar2 = DAT_001c8a9f, uVar3 < 8)) {
    uVar2 = (&UEVERG)[uVar3];
  }
  uVar3 = func_0xff217fe8((uint)ZKUEVERG << 8,uVar2,_DAT_003fb384);
  _DAT_003fb384 = (short)uVar3;
  uVar3 = (uint)vfzg_w * (uVar3 >> 8 & 0xff) * (uint)FNRAD >> 0xc;
  if (0xffff < uVar3) {
    uVar3 = 0xffff;
  }
  nturbv_w = (word)uVar3;
  nturb_w = nturbv_w;
  uVar3 = uVar3 & 0xffff;
  iVar1 = uVar3 - _DAT_003fb368;
  if (iVar1 < -0x8000) {
    iVar1 = -0x8000;
  }
  else if (0x7fff < iVar1) {
    iVar1 = 0x7fff;
  }
  dnturb_w = (word)iVar1;
  _DAT_003fb368 = nturbv_w;
  if ((short)dnturb_w < 0) {
    iVar1 = (int)(short)dnturb_w * (uint)TVFUE;
    if (iVar1 < -0x8000) {
      iVar1 = uVar3 - 0x8000;
      if (iVar1 < 0) {
        iVar1 = 0;
      }
      else if (0xffff < iVar1) {
        iVar1 = 0xffff;
      }
      nturbv_w = (word)iVar1;
    }
    else {
      iVar1 = uVar3 + (int)(short)iVar1;
      if (iVar1 < 0) {
        iVar1 = 0;
      }
      else if (0xffff < iVar1) {
        iVar1 = 0xffff;
      }
      nturbv_w = (word)iVar1;
    }
  }
  return;
}

