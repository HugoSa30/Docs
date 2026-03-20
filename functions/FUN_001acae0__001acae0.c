/*
 * Program: n42.bin
 * Function: FUN_001acae0
 * Entry: 001acae0
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined FUN_001acae0(void)

{
  uint *puVar1;
  char cVar2;
  undefined uVar3;
  uint uVar4;
  uint in_TBLr;
  uint in_TBUr;
  
  cVar2 = (*(code *)&SUB_00fac8d0)(1);
  if (cVar2 == '\x01') {
    _DAT_003fcab8 = (uint *)&dr_reg_resetTimestampBuffer;
    _dr_reg_resetTimestampBuffer_idx = 0;
    _DAT_003fca80 = (undefined4 *)&dr_reg_resetBuffer;
    _dr_reg_resetBuffer_cnt = 0;
    _dr_reg_resetBuffer_idx = 0;
    _DAT_003fcac8 = 100;
  }
  if ((_DAT_003fcab8 < &dr_reg_resetTimestampBuffer) || (&UNK_003fcab0 < _DAT_003fcab8)) {
    _DAT_003fcab8 = (uint *)&dr_reg_resetTimestampBuffer;
    _dr_reg_resetTimestampBuffer_idx = 0;
  }
  if ((_DAT_003fca80 < &dr_reg_resetBuffer) || (&UNK_003fca74 < _DAT_003fca80)) {
    _DAT_003fca80 = (undefined4 *)&dr_reg_resetBuffer;
    _dr_reg_resetBuffer_cnt = 0;
    _dr_reg_resetBuffer_idx = 0;
  }
  uVar4 = (uint)_DAT_002fc288;
  if ((_DAT_002fc288 & 0x1000) != 0) {
    _DAT_003fcac8 = 0x65;
  }
  if ((_DAT_002fc288 & 0x2000) != 0) {
    _DAT_003fcac8 = 0x67;
  }
  _DAT_003fcacc = uVar4;
  *_DAT_003fca80 = _DAT_003fcac8;
  _DAT_003fca80[1] = uVar4;
  _DAT_003fca80[2] = _DAT_003fcad0;
  puVar1 = _DAT_003fcab8;
  _DAT_003fcac0 = _DAT_003fcac8;
  _DAT_003fcac8 = 0;
  _DAT_003fca80 = _DAT_003fca80 + 3;
  _dr_reg_resetBuffer_idx = _dr_reg_resetBuffer_idx + 1;
  _dr_reg_resetBuffer_cnt = _dr_reg_resetBuffer_cnt + 1;
  if (&UNK_003fca74 < _DAT_003fca80) {
    _DAT_003fca80 = (undefined4 *)&dr_reg_resetBuffer;
    _dr_reg_resetBuffer_idx = 0;
  }
  *_DAT_003fcab8 = in_TBUr;
  puVar1[1] = in_TBLr;
  uVar4 = *puVar1 * 0x6666 + (int)((ulonglong)puVar1[1] * 0x6666 >> 0x20);
  *puVar1 = uVar4 >> 0x10;
  puVar1[1] = uVar4 * 0x10000 | puVar1[1] * 0x6666 >> 0x10;
  _DAT_003fcab8 = _DAT_003fcab8 + 2;
  _dr_reg_resetTimestampBuffer_idx = _dr_reg_resetTimestampBuffer_idx + 1;
  uVar3 = (*(code *)&SUB_00fac8d0)(0);
  return uVar3;
}

