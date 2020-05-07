CLASS
 NAME "0.0"
 GROUP "RDPA-WXO"
 EXPRESSION ([pixel] < 0.1)
 STYLE
  COLOR 0 0 0
  OPACITY 0
 END
END
CLASS
 NAME "0.10 - 0.50"
 GROUP "RDPA-WXO"
 EXPRESSION ([pixel] >= 0.10 AND [pixel] < 0.50)
 STYLE
  COLOR 152 203 254
 END
END
CLASS
 NAME "0.50 - 1.00"
 GROUP "RDPA-WXO"
 EXPRESSION ([pixel] >= 0.50 AND [pixel] < 1.00)
 STYLE
  COLOR 0 152 254
 END
END

CLASS
 NAME "1.00 - 2.50"
 GROUP "RDPA-WXO"
 EXPRESSION ([pixel] >= 1.00 AND [pixel] < 2.50)
 STYLE
  COLOR 0 45 254
 END
END

CLASS
 NAME "2.50 - 5.00"
 GROUP "RDPA-WXO"
 EXPRESSION ([pixel] >= 2.50 AND [pixel] < 5.00)
 STYLE
  COLOR 0 254 101
 END
END

CLASS
 NAME "5.00 - 7.50"
 GROUP "RDPA-WXO"
 EXPRESSION ([pixel] >= 5.00 AND [pixel] < 7.50)
 STYLE
  COLOR 0 203 0
 END
END

CLASS
 NAME "7.50 - 10.00"
 GROUP "RDPA-WXO"
 EXPRESSION ([pixel] >= 7.50 AND [pixel] < 10.00)
 STYLE
  COLOR 0 152 0
 END
END

CLASS
 NAME "10.00 - 15.00"
 GROUP "RDPA-WXO"
 EXPRESSION ([pixel] >= 10.00 AND [pixel] < 15.00)
 STYLE
  COLOR 0 101 0
 END
END

CLASS
 NAME "15.00 - 20.00"
 GROUP "RDPA-WXO"
 EXPRESSION ([pixel] >= 15.00 AND [pixel] < 20.00)
 STYLE
  COLOR 254 254 50
 END
END

CLASS
 NAME "20.00 - 25.00"
 EXPRESSION ([pixel] >= 20.00 AND [pixel] < 25.00)
 GROUP "RDPA-WXO"
 STYLE
  COLOR 254 203 0
 END
END

CLASS
 NAME "25.00 - 30.00"
 GROUP "RDPA-WXO"
 EXPRESSION ([pixel] >= 25.00 AND [pixel] < 30.00)
 STYLE
  COLOR 254 152 0
 END
END

CLASS
 NAME "30.00 - 40.00"
 GROUP "RDPA-WXO"
 EXPRESSION ([pixel] >= 30.00 AND [pixel] < 40.00)
 STYLE
  COLOR 254 101 0
 END
END

CLASS
 NAME "40.00 - 50.00"
 GROUP "RDPA-WXO"
 EXPRESSION ([pixel] >= 40.00 AND [pixel] < 50.00)
 STYLE
  COLOR 254 0 0
 END
END

CLASS
 NAME "50.00 - 75.00"
 GROUP "RDPA-WXO"
 EXPRESSION ([pixel] >= 50.00 AND [pixel] < 75.00)
 STYLE
  COLOR 254 0 152
 END
END

CLASS
 NAME "75.00 - 100.00"
 GROUP "RDPA-WXO"
 EXPRESSION ([pixel] >= 75.00 AND [pixel] < 100.00)
 STYLE
  COLOR 152 50 203
 END
END

CLASS
 NAME "100.00 - 150.00"
 GROUP "RDPA-WXO"
 EXPRESSION ([pixel] >= 100.00 AND [pixel] < 150.00)
 STYLE
  COLOR 101 0 152
 END
END

CLASS
 NAME "150.00 - 250.00"
 GROUP "RDPA-WXO"
 EXPRESSION ([pixel] >= 150.00)
 STYLE
  COLOR 152 152 152
 END
END