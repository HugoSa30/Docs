/*
 * Program: n42.bin
 * Function: FUN_000fade0
 * Entry: 000fade0
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_000fade0(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 in_MSR;
  undefined4 in_SRR0;
  undefined4 in_SRR1;
  
  puVar1 = (undefined4 *)(_DAT_003fbcb8 + 8);
  _DAT_003fbcb8 = _DAT_003fbcb8 + 0xc;
  *puVar1 = in_SRR1;
  *(undefined4 *)(_DAT_003fbcb8 + -8) = in_SRR0;
  *(uint *)(_DAT_003fbcb8 + -0xc) = _DAT_002fc014;
  uVar2 = _DAT_003fbcb0;
  uVar3 = LZCOUNT(_DAT_002fc010 & _DAT_002fc014);
  if (uVar3 < 0x10) {
    if ((_DAT_003fbcb4 & 0xffff) == uVar3) {
      _DAT_003fbcb0 = _DAT_003fbce4;
      _DAT_002fc014 = *(undefined4 *)(_DAT_003fbcbc + 0x18);
      FUN_000fb018();
    }
    else {
      _DAT_003fbcb0 = (*(int *)(_DAT_003fbcbc + 0xc) - uVar3) + -1;
      _DAT_002fc014 = *(undefined4 *)(*(int *)(_DAT_003fbcbc + 0x44) + _DAT_003fbcb0 * 4);
      if (*(int *)(_DAT_003fbcbc + 0x10) == _DAT_003fbcb0) {
        FUN_000fb110();
        if ((uVar2 < _DAT_003fbce4) && (_DAT_003fbce8 < _DAT_003fbce4)) {
          FUN_000fb018();
        }
      }
      else {
        (**(code **)(uVar3 * 4 + 0xfa9dd4))();
      }
    }
    _DAT_002fc014 = *(undefined4 *)(_DAT_003fbcb8 + -0xc);
    uVar4 = *(undefined4 *)(_DAT_003fbcb8 + -4);
  }
  else {
    _DAT_002fc014 = *(undefined4 *)(_DAT_003fbcb8 + -0xc);
    uVar4 = *(undefined4 *)(_DAT_003fbcb8 + -4);
  }
  _DAT_003fbcb8 = _DAT_003fbcb8 + -0xc;
  returnFromInterrupt(in_MSR,uVar4);
  _DAT_003fbcb0 = uVar2;
  return CONCAT44(param_1,param_2);
}

