Imports System.IO
Module Module2
    Sub Main()
        Dim f As FileStream
        Try
            f = New FileStream("alfabeto.dat", FileMode.Open)
        Catch ex As Exception
            Console.WriteLine("Erro ao abrir o ficheiro!" & vbNewLine & ex.Message)
            Return
        End Try
        Dim ch As Char
        'a propriedade Lenght retorna o flamer° de bytes do ficheiro 
        'as posicoes validas sac) de 0 a Lenght - 1 
        Try
            For i As Integer = 0 To CInt(f.Length - 1)
                f.Seek(i, SeekOrigin.Begin)
                ch = ChrW(f.ReadByte)
                Console.Write(ch)
            Next
        Catch ex As Exception
            Console.WriteLine("Erro ao ler o ficheiro." & vbNewLine & ex.Message)
        End Try
        f.Close()
        Module2.Main()
        Console.Read()
    End Sub
End Module