//
// Created by clara on 08/06/2022.
//

#include "Empresa.h"

Empresa::Empresa(){
    this->nome = "";

    setInformacaoNaoExisteException();

}
Empresa::Empresa(const string& nome){
    this->nome = nome;
    setInformacaoNaoExisteException();
}
Empresa::Empresa(const Empresa& obj){
    this->nome = obj.nome;

    this->administrador = obj.administrador;
    this->cliente = obj.clientes;
    this->produto = obj.produtos;

    void setInformacaoNaoExisteException();
}

const string& Empresa::getNome() const {
    return nome;
}

void Empresa::setNome(const string &nome) {
    this->nome = nome;
}

SubjectContainer & School::getSubjectContainer(){
    return this->subjects;
}
StudentContainer & School::getStudentContainer(){
    return this->students;
}
InstructorContainer & School::getInstructorContainer(){
    return this->instructors;
}
EnrollContainer & School::getEnrollContainer(){
    return this->enrolls;
}


void School::setDataForConsistency(){
    this->students.setEnrolls(&this->enrolls);
    this->subjects.setEnrolls(&this->enrolls);
    this->subjects.setInstructors(&this->instructors);
}