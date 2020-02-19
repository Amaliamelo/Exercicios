<div class="col-md-7 offset-md-5">
    <form  action="recebe_agendamento.php" method="POST" >
    <div class="form-group col-md-6">
        <label id="nome">Nome</label>
        <input type="text" name="nome" id="nome" class="form-control col-md-6" >
    </div>
    <div class="form-group col-md-6">
        <label >Email</label>
    <input type="email" class="form-control col-md-6"name="email" id="email" >
    </div>
    <div class="form-group col-md-6">
        <label >Telefone</label>
    <input type="text" class="form-control col-md-6"name="tel" id="tel" placeholder="(00)0000-00000" max="11">
    </div>
    <div class="form-group col-md-6">
        <label >Data</label>
    <input  type="date" name="data" id="data" class="form-control col-md-6" >
    </div>
    <div class="form-group col-md-6">
        <label >Hora</label>
    <input type="time" name="hora" id="hora" class="form-control col-md-6" min="09:00" max="19:00" >
    </div>
    <button type="submit" class="btn btn-primary">Enviar</button>
    </form>   
</div>   