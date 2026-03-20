/*
 * Program: n42.bin
 * Function: FUN_001e8948
 * Entry: 001e8948
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001e8948(void)

{
  _DAT_003fb95c = _DAT_002fc100;
  _DAT_003fb960 = _DAT_002fc104;
  _DAT_003fb968 = _DAT_002fc108;
  _DAT_003fb96c = _DAT_002fc10c;
  _DAT_003fb974 = _DAT_002fc110;
  _DAT_003fb978 = _DAT_002fc114;
  _DAT_003fb980 = _DAT_002fc118;
  _DAT_003fb984 = _DAT_002fc11c;
  DAT_003fb964 = 0;
  if (((_DAT_002fc118 & 2) == 0) || ((_DAT_002fc118 & 1) == 0)) {
    DAT_003fb970 = 3;
    _DAT_003fb96c = _DAT_002fc10c | 0xfffc0000;
    DAT_003fb988 = 0;
  }
  else {
    DAT_003fb970 = 0;
    DAT_003fb988 = 3;
  }
  DAT_003fb97c = 5;
  FUN_001e8894();
  return;
}

