<?php
function agendar(){
    $nome=$_POST["nome"];
    $email=$_POST["email"];
    $telefone=$_POST["tel"];
    $data=$_POST["data"];
    $hora=$_POST["hora"];
    if($_POST==""){
        echo'<p class="p">Não foi inscrito nenhum agendamento</p>';
    }
    if(!file_exists("agendamentos.xml")){  
    $xml=
    '<?xml version="1.0" encoding="UTF-8"?>
        <agendamento>
            <agendamentos>
                <nome>'.$nome.'</nome>
                <email>'.$email.'</email>
                <telefone>'.$telefone.'</telefone>
                <data>'.$data.'</data>
                <hora>'.$hora.'</hora>
            </agendamentos>
        </agendamento>';
            file_put_contents("agendamentos.xml",$xml);
            echo'<p class="p">Agendamento Realizado com sucesso!!</p>';
    }
    else{
        $aux=false;
        $xml = simplexml_load_file("agendamentos.xml");
        foreach($xml->children() as $agendamento){
            if($agendamento->data==$data){
                if($agendamento->hora==$hora){
                    $aux=true;
                }
            }
        }
        if($aux){
            echo'<p class="p">Já existe alguem agendado nesta data e hora
                <br/> Por favor agende em outra data ou hora</p>';
        }
        else{
            $arquivo=$xml->addChild("agendamentos");
            $arquivo->addChild("nome", $nome);
            $arquivo->addChild("email", $email);
            $arquivo->addChild("telefone", $telefone);
            $arquivo->addChild("data", $data);
            $arquivo->addChild("hora", $hora);

            file_put_contents("agendamentos.xml",$xml->asXML());
            echo'<p class="p">Agendamento Realizado com sucesso!!</p>';
        }
    }
}

    function listar(){
              if(file_exists("agendamentos.xml")){
              $xml = simplexml_load_file("agendamentos.xml");
              echo'<div class="text-center text-white">
                    <table class="table table-striped table-dark">
                      <thead>
                          <tr>
                          <th scope="col">Nome</th>
                          <th scope="col">Email</th>
                          <th scope="col">Telefone</th>
                          <th scope="col">Data</th>
                          <th scope="col">Hora</th>
                          </tr>
                      </thead>
                      <tbody>';
                         foreach($xml->children() as $agendamento){
                        echo '<tr>
                      <td>'.$agendamento->nome.'</td>
                      <td>'.$agendamento->email.'</td>
                      <td>'.$agendamento->telefone.'</td>
                      <td>'.$agendamento->data.'</td> 
                      <td>'.$agendamento->hora.'</td>
                      ';}
                      echo'</tbody>
                    </table>
                  </div>';
              
              }
              else{
                  echo'<p class="p">Nenhum Agendamento Realizado!!</p>';
              }
          }