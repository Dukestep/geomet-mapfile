CLASS
 NAME ".. -60"
 GROUP "TEMP_550_275-LINEAR"
 EXPRESSION ([pixel] < -60)
 STYLE
  COLORRANGE 0 0 127 0 0 127
  DATARANGE -100.0 -60.0
 END
END
CLASS
 NAME "-60 -55"
 GROUP "TEMP_550_275-LINEAR"
 EXPRESSION ([pixel] >= -60 AND [pixel] < -55)
 STYLE
  COLORRANGE 0 0 127 0 0 183
  DATARANGE -60.0 -55.0
 END
END
CLASS
 NAME "-55 -50"
 GROUP "TEMP_550_275-LINEAR"
 EXPRESSION ([pixel] >= -55 AND [pixel] < -50)
 STYLE
  COLORRANGE 0 0 239 0 63 254
  DATARANGE -55.0 -50.0
 END
END
CLASS
 NAME "-50 -45"
 GROUP "TEMP_550_275-LINEAR"
 EXPRESSION ([pixel] >= -50 AND [pixel] < -45)
 STYLE
  COLORRANGE 0 147 254 0 231 254
  DATARANGE -50.0 -45.0
 END
END
CLASS
 NAME "-45 -40"
 GROUP "TEMP_550_275-LINEAR"
 EXPRESSION ([pixel] >= -45 AND [pixel] < -40)
 STYLE
  COLORRANGE 0 231 254 51 253 135
  DATARANGE -45.0 -40.0
 END
END
CLASS
 NAME "-40 -35"
 GROUP "TEMP_550_275-LINEAR"
 EXPRESSION ([pixel] >= -40 AND [pixel] < -35)
 STYLE
  COLORRANGE 51 253 203 119 253 135
  DATARANGE -40.0 -35.0
 END
END
CLASS
 NAME "-35 -30"
 GROUP "TEMP_550_275-LINEAR"
 EXPRESSION ([pixel] >= -35 AND [pixel] < -30)
 STYLE
  COLORRANGE 119 253 135 187 254 67
  DATARANGE -35.0 -30.0
 END
END
CLASS
 NAME "-30 -25"
 GROUP "TEMP_550_275-LINEAR"
 EXPRESSION ([pixel] >= -30 AND [pixel] < -25)
 STYLE
  COLORRANGE 187 254 67 255 255 0
  DATARANGE -30.0 -25.0
 END
END
CLASS
 NAME "-25 -20"
 GROUP "TEMP_550_275-LINEAR"
 EXPRESSION ([pixel] >= -25 AND [pixel] < -20)
 STYLE
  COLORRANGE 255 255 0 254 187 0
  DATARANGE -25.0 -20.0
 END
END
CLASS
 NAME "-20 -15"
 GROUP "TEMP_550_275-LINEAR"
 EXPRESSION ([pixel] >= -20 AND [pixel] < -15)
 STYLE
  COLORRANGE 254 187 0 254 119 0
  DATARANGE -20.0 -15.0
 END
END
CLASS
 NAME "-15 -10"
 GROUP "TEMP_550_275-LINEAR"
 EXPRESSION ([pixel] >= -15 AND [pixel] < -10)
 STYLE
  COLORRANGE 254 119 0 254 50 0
  DATARANGE -15.0 -10.0
 END
END
CLASS
 NAME "-10 -5"
 GROUP "TEMP_550_275-LINEAR"
 EXPRESSION ([pixel] >= -10 AND [pixel] < -5)
 STYLE
  COLORRANGE 239 0 0 183 0 0
  DATARANGE -10.0 -5.0
 END
END
CLASS
 NAME "-5 0"
 GROUP "TEMP_550_275-LINEAR"
 EXPRESSION ([pixel] >= -5 AND [pixel] < 0)
 STYLE
  COLORRANGE 127 0 0 85 0 0
  DATARANGE -5.0 0.0
 END
END
CLASS
 NAME ">= 0"
 GROUP "TEMP_550_275-LINEAR"
 EXPRESSION ([pixel] >= 0)
 STYLE
  COLORRANGE 127 0 0 127 0 0
  DATARANGE 0.0 60.0
 END
END