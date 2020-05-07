CLASS
 NAME "200.00 - 283.15"
 GROUP "SEA_TEMPSURF-MID"
 EXPRESSION (200.00 <= [pixel] AND [pixel] < 283.15)
 STYLE
  COLORRANGE 0 0 127 0 0 127
  DATARANGE 200.00 283.15
 END
END
CLASS
 NAME "283.15 - 285.15"
 GROUP "SEA_TEMPSURF-MID"
 EXPRESSION (283.15 <= [pixel] AND [pixel] < 285.15)
 STYLE
  COLORRANGE 0 0 127 0 63 254
  DATARANGE 283.15 285.15
 END
END
CLASS
 NAME "285.15 - 287.15"
 GROUP "SEA_TEMPSURF-MID"
 EXPRESSION (285.15 <= [pixel] AND [pixel] < 287.15)
 STYLE
  COLORRANGE 0 63 254 51 253 203
  DATARANGE 285.15 287.15
 END
END
CLASS
 NAME "287.15 - 289.15"
 GROUP "SEA_TEMPSURF-MID"
 EXPRESSION (287.15 <= [pixel] AND [pixel] < 289.15)
 STYLE
  COLORRANGE 51 253 203 255 255 0
  DATARANGE 287.15 289.15
 END
END
CLASS
 NAME "289.15 - 291.15"
 GROUP "SEA_TEMPSURF-MID"
 EXPRESSION (289.15 <= [pixel] AND [pixel] < 291.15)
 STYLE
  COLORRANGE 255 255 0 254 50 0
  DATARANGE 289.15 291.15
 END
END
CLASS
 NAME "291.15 - 293.15"
 GROUP "SEA_TEMPSURF-MID"
 EXPRESSION (291.15 <= [pixel] AND [pixel] < 293.15)
 STYLE
  COLORRANGE 254 50 0 127 0 0
  DATARANGE 291.15 293.15
 END
END
CLASS
 NAME "293.15 - 400.00"
 GROUP "SEA_TEMPSURF-MID"
 EXPRESSION (293.15 <= [pixel] AND [pixel] <= 400.00)
 STYLE
  COLORRANGE 127 0 0 127 0 0
  DATARANGE 293.15 400.00
 END
END