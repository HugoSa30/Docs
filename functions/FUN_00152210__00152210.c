/*
 * Program: n42.bin
 * Function: FUN_00152210
 * Entry: 00152210
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Removing unreachable block (ram,0x00152310) */
/* WARNING: Removing unreachable block (ram,0x001523c8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00152210(void)

{
  ushort uVar1;
  undefined uVar2;
  uint uVar3;
  
  DAT_005b918a = func_0xff218eec(DAT_001d1b99,0x1d1b9a,&DAT_001d1ba0,fho);
  _DAT_003fb352 = (undefined2)((int)DAT_005b918a << 7);
  DAT_005b951e = func_0xff21a834(DAT_001c8948,&DAT_001c894a,DAT_001c8949,&DAT_001c8950,&DAT_001c895c
                                 ,tmot,tka);
  if (B_llrein == '\0') {
    _DAT_003fb348 = (ushort)DAT_003fb348 << 8;
    if (B_gdst == 0) {
      uVar2 = func_0xff2187cc(&DAT_001d1b60,tmot);
      _DAT_003fb348 = CONCAT11(uVar2,DAT_003fb349);
    }
    else {
      uVar2 = func_0xff2187cc(&DAT_001d1b4c,tmot);
      _DAT_003fb348 = CONCAT11(uVar2,DAT_003fb349);
    }
    uVar3 = (uint)DAT_005b951e + (uint)_DAT_003fb348;
    if (0xffff < uVar3) {
      uVar3 = 0xffff;
    }
    uVar1 = (ushort)uVar3;
  }
  else {
    uVar1 = DAT_005b951e;
    if (DAT_003fb348 != 0) {
      if (B_gdst == 0) {
        uVar3 = func_0xff2187cc(&DAT_001d1b88,tmot);
      }
      else {
        uVar3 = func_0xff2187cc(&DAT_001d1b74,tmot);
      }
      _DAT_003fb348 = func_0xff217fe8((uVar3 & 0xff) << 8,0,_DAT_003fb348);
      uVar3 = (uint)DAT_005b951e + (uint)_DAT_003fb348;
      if (0xffff < uVar3) {
        uVar3 = 0xffff;
      }
      uVar1 = (ushort)uVar3;
    }
  }
  _DAT_003fb350 = uVar1;
  return;
}

