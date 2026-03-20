/*
 * Program: n42.bin
 * Function: FUN_000f405c
 * Entry: 000f405c
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_000f405c(char param_1,ushort *param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint in_TBLr;
  int in_TBUr;
  
  if (param_1 != '\x01') {
    return (bool)2;
  }
  if (UNK_003fa384 != '\x01') {
    return (bool)3;
  }
  _DAT_003fa39a = _UNK_003fa386;
  _DAT_003fa39c = _UNK_003fa388;
  _DAT_003fa3a0 = _UNK_003fa38c;
  _DAT_003fa3a4 = _UNK_003fa390;
  _DAT_003fa3a8 = _UNK_003fa394;
  cVar1 = (*(code *)&SUB_00015d64)(uRam000175d8);
  uVar2 = in_TBUr * 0x6666 + (int)((ulonglong)in_TBLr * 0x6666 >> 0x20);
  uVar3 = uVar2 * 0x10000 | in_TBLr * 0x6666 >> 0x10;
  _DAT_003fa370 = uVar3 - _UNK_003fa37c;
  if (cVar1 != '\0') {
    _DAT_003fa3ac = (*(code *)&SUB_00fab47c)(0,1,uVar2 >> 0x10,uVar3,param_2);
  }
  if (_UNK_003fa374 == 0) {
    *(undefined *)(param_2 + 2) = 2;
  }
  else if (cVar1 == '\0') {
    if ((uint)(_DAT_003fa3a4 + _DAT_003fa3a0 + _UNK_003fa380) < _DAT_003fa370) {
      *(undefined *)(param_2 + 2) = 5;
    }
    else {
      *(undefined *)(param_2 + 2) = 2;
    }
  }
  else {
    uVar2 = _DAT_003fa3a4 + _DAT_003fa3a0 + _UNK_003fa380;
    if (_DAT_003fa370 < uVar2) {
      if ((_DAT_003fa39a <= *param_2) && (*param_2 <= _DAT_003fa39c)) {
        (*(code *)&SUB_00fab668)(0,param_2);
        goto LAB_000f42f0;
      }
      if (_DAT_003fa370 < uVar2) {
        (*(code *)&SUB_00fab6f0)(0,param_2);
        goto LAB_000f42f0;
      }
    }
    *(undefined *)(param_2 + 2) = 4;
  }
LAB_000f42f0:
  if (cVar1 != '\0') {
                    /* WARNING: Read-only address (ram,0x003fa374) is written */
    _UNK_003fa374 = 1;
  }
                    /* WARNING: Read-only address (ram,0x003fa374) is written */
                    /* WARNING: Read-only address (ram,0x003fa37c) is written */
                    /* WARNING: Read-only address (ram,0x003fa380) is written */
                    /* WARNING: Read-only address (ram,0x003fa384) is written */
                    /* WARNING: Read-only address (ram,0x003fa386) is written */
                    /* WARNING: Read-only address (ram,0x003fa388) is written */
                    /* WARNING: Read-only address (ram,0x003fa38c) is written */
                    /* WARNING: Read-only address (ram,0x003fa390) is written */
                    /* WARNING: Read-only address (ram,0x003fa394) is written */
  return *(char *)(param_2 + 2) != '\0';
}

